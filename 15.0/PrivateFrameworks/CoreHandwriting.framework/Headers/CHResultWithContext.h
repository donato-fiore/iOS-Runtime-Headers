// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHRESULTWITHCONTEXT_H
#define CHRESULTWITHCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHMutableTokenizedTextResult.h"

@interface CHResultWithContext : NSObject

@property int contentType; // ivar: _contentType
@property (retain, nonatomic) NSString *leftContext; // ivar: _leftContext
@property (retain, nonatomic) CHMutableTokenizedTextResult *result; // ivar: _result


-(id)initWithResult:(id)arg0 leftContext:(id)arg1 contentType:(int)arg2 ;
-(void)dealloc;


@end


#endif