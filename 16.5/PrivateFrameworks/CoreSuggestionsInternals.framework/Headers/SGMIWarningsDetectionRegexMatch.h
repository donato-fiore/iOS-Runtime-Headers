// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIWARNINGSDETECTIONREGEXMATCH_H
#define SGMIWARNINGSDETECTIONREGEXMATCH_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SGMIWarningsDetectionRegexMatch : NSObject

@property (readonly, nonatomic) _NSRange coreRange; // ivar: _coreRange
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSString *signature; // ivar: _signature
@property (readonly, nonatomic) NSArray *wildcardsMatches; // ivar: _wildcardsMatches


-(NSUInteger)length;
-(NSUInteger)location;
-(id)initWithRange:(struct _NSRange )arg0 coreRange:(struct _NSRange )arg1 signature:(id)arg2 wildcardsMatches:(id)arg3 ;


@end


#endif