// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPOBJECT_H
#define TSPOBJECT_H

@class NSString, TSPUnknownContent;
@protocol TSPObjectDelegate;

#import <Foundation/Foundation.h>

#import "TSPObject.h"
#import "TSPObjectContext.h"

@interface TSPObject : NSObject

@property (readonly, nonatomic) BOOL allowsImplicitComponentOwnership;
@property (readonly, nonatomic) TSPObject *componentRootObject;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) unsigned int delayedArchivingPriority;
@property (readonly, nonatomic) BOOL isCommandObject;
@property (readonly, nonatomic) BOOL isComponentRoot;
@property (readonly, nonatomic) BOOL needsArchiving;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) BOOL shouldDelayArchiving;
@property (readonly, nonatomic) BOOL storeOutsideObjectArchive;
@property (weak, nonatomic) NSObject<TSPObjectDelegate> *tsp_delegate; // ivar: _delegate
@property (nonatomic) NSInteger tsp_identifier; // ivar: _identifier
@property (nonatomic) NSInteger tsp_modifyObjectToken; // ivar: _modifyObjectToken
@property (readonly, nonatomic) NSInteger tsp_unarchiverIdentifier; // ivar: _unarchiverIdentifier
@property (readonly, nonatomic) TSPUnknownContent *tsp_unknownContent; // ivar: _unknownContent


+(BOOL)tsp_isTransientObjectIdentifier:(NSInteger)arg0 ;
-(BOOL)allowsDuplicatesOutsideOfDocumentPackage;
-(BOOL)dirtiesDocumentPackage;
-(id)documentRoot;
-(id)init;
-(id)initDocumentObjectWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)didFinishUnarchiving;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg0 ;
-(void)willModify;
-(void)willModifyForUpgrade;


@end


#endif