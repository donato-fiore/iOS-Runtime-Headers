// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSCRIPTSECURITYORIGIN_H
#define VSSCRIPTSECURITYORIGIN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSScriptSecurityOrigin : NSObject

@property (copy, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) NSInteger port; // ivar: _port
@property (copy, nonatomic) NSString *scheme; // ivar: _scheme


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif