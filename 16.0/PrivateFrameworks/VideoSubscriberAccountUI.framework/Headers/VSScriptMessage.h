// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSCRIPTMESSAGE_H
#define VSSCRIPTMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VSScriptSecurityOrigin.h"

@interface VSScriptMessage : NSObject

@property (copy, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) VSScriptSecurityOrigin *source; // ivar: _source
@property (retain, nonatomic) VSScriptSecurityOrigin *target; // ivar: _target


-(id)description;


@end


#endif