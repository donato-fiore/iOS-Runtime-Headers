// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXACTIONSERIALIZATIONMANAGER_H
#define SXACTIONSERIALIZATIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol SXActionSerializer, SXActionSerializationManager;

#import <Foundation/Foundation.h>


@interface SXActionSerializationManager : NSObject <SXActionSerializer, SXActionSerializationManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *serializers; // ivar: _serializers
@property (readonly) Class superclass;


-(id)URLForAction:(id)arg0 type:(NSInteger)arg1 ;
-(id)init;
-(void)registerSerializer:(id)arg0 actionType:(id)arg1 ;


@end


#endif