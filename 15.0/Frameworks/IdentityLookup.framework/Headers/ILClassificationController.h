// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ILCLASSIFICATIONCONTROLLER_H
#define ILCLASSIFICATIONCONTROLLER_H

@class NSHashTable, NSExtension, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ILClassificationController : NSObject

@property (readonly, nonatomic, getter=isClassificationAvailable) BOOL classificationAvailable;
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (copy, nonatomic) NSExtension *electedExtension; // ivar: _electedExtension
@property (copy, nonatomic) NSArray *extensions; // ivar: _extensions
@property (copy, nonatomic) id *firstMatchCompletionBlock; // ivar: _firstMatchCompletionBlock
@property (readonly, nonatomic) id *matchingExtensionToken; // ivar: _matchingExtensionToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)shouldActivate;
+(id)electedExtensionFromExtensions:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)beginMatchingExtensionsWithFirstCompletion:(id)arg0 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;
-(void)updateExtensions:(id)arg0 electedExtensions:(id)arg1 ;


@end


#endif