// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPEERIDINTERNAL_H
#define MCPEERIDINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MCPeerIDInternal : NSObject

@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *idString; // ivar: _idString
@property (readonly, nonatomic) NSUInteger pid64; // ivar: _pid64


-(id)initWithIDString:(id)arg0 pid64:(NSUInteger)arg1 displayName:(id)arg2 ;
-(void)dealloc;


@end


#endif