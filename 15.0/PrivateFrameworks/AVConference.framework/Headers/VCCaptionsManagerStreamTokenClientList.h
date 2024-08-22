// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCAPTIONSMANAGERSTREAMTOKENCLIENTLIST_H
#define VCCAPTIONSMANAGERSTREAMTOKENCLIENTLIST_H

@class NSArray;
@protocol VCCaptionsSource;

#import <Foundation/Foundation.h>


@interface VCCaptionsManagerStreamTokenClientList : NSObject {
    NSInteger _streamToken;
}


@property (readonly, nonatomic) NSObject<VCCaptionsSource> *captionsSource; // ivar: _captionsSource
@property (readonly, nonatomic) NSArray *clientContextList; // ivar: _clientContextList


+(BOOL)isValidContext:(id)arg0 ;
+(NSInteger)streamTokenFromClientContext:(id)arg0 ;
-(id)initWithStreamToken:(NSInteger)arg0 captionsSource:(id)arg1 ;
-(id)newContext;
-(void)dealloc;
-(void)removeContext:(id)arg0 ;


@end


#endif