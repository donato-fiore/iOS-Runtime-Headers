// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUFONTMANAGER_H
#define NUFONTMANAGER_H

@class NSString, NSCountedSet;
@protocol NUFontRegistration, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUFontManager : NSObject <NUFontRegistration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSCountedSet *referenceCounts; // ivar: _referenceCounts
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationQueue; // ivar: _registrationQueue
@property (readonly) Class superclass;


-(BOOL)registerFontWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldUnregisterFontWithURL:(id)arg0 ;
-(BOOL)unregisterFontAtURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)referenceCountForFontWithURL:(id)arg0 ;
-(id)init;
-(void)decreaseReferenceCountForFontWithURL:(id)arg0 ;
-(void)increaseReferenceCountForFontWithURL:(id)arg0 ;
-(void)unregisterFontWithURL:(id)arg0 ;


@end


#endif