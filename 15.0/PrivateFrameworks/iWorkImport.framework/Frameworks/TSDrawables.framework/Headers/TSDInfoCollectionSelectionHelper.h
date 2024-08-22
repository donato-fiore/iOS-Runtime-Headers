// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDINFOCOLLECTIONSELECTIONHELPER_H
#define TSDINFOCOLLECTIONSELECTIONHELPER_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface TSDInfoCollectionSelectionHelper : NSObject

@property (readonly, nonatomic) NSString *UUIDDescription;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSSet *modelInfos; // ivar: _modelInfos
@property (readonly, nonatomic) NSSet *nonInteractiveInfos; // ivar: _nonInteractiveInfos


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithInteractiveInfos:(id)arg0 ;
-(id)initWithInteractiveInfos:(id)arg0 nonInteractiveInfos:(id)arg1 ;


@end


#endif