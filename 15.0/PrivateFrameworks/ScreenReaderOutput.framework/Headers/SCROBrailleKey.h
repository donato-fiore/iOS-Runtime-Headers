// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROBRAILLEKEY_H
#define SCROBRAILLEKEY_H

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCROBrailleKey : NSObject <NSSecureCoding>

 {
    NSMutableArray *_maskArray;
    NSString *_identifier;
    NSInteger _routerIndex;
    NSInteger _routerToken;
    NSInteger _routerLocation;
    BOOL _hasRouterInfo;
    id<NSSecureCoding> *_appToken;
    int _displayToken;
    int _displayMode;
}




+(BOOL)supportsSecureCoding;
-(BOOL)getRouterIndex:(*NSInteger)arg0 token:(*NSInteger)arg1 location:(*NSInteger)arg2 appToken:(*id)arg3 ;
-(id)description;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keyMasks;
-(int)displayMode;
-(int)displayToken;
-(void)addKeyMask:(unsigned int)arg0 ;
-(void)addModifierMask:(unsigned int)arg0 ;
-(void)addSpacebarKeyMask;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDisplayMode:(int)arg0 ;
-(void)setDisplayToken:(int)arg0 ;
-(void)setRouterIndex:(NSInteger)arg0 token:(NSInteger)arg1 location:(NSInteger)arg2 appToken:(id)arg3 ;


@end


#endif