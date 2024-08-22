// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMOMENTSMANAGERSTREAMTOKENCLIENTLIST_H
#define VCMOMENTSMANAGERSTREAMTOKENCLIENTLIST_H

@class NSArray;
@protocol VCMomentsMessenger;

#import <Foundation/Foundation.h>


@interface VCMomentsManagerStreamTokenClientList : NSObject {
    NSInteger _streamToken;
}


@property (readonly, nonatomic) NSArray *clientContextList; // ivar: _clientContextList
@property (readonly, nonatomic) NSObject<VCMomentsMessenger> *messenger; // ivar: _messenger


+(BOOL)isValidContext:(id)arg0 ;
+(NSInteger)streamTokenFromClientContext:(id)arg0 ;
-(id)initWithStreamToken:(NSInteger)arg0 messenger:(id)arg1 ;
-(id)newContext;
-(void)dealloc;
-(void)removeContext:(id)arg0 ;


@end


#endif