// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSYNONYMSTRING_H
#define WFSYNONYMSTRING_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSynonymString : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSArray *synonyms; // ivar: _synonyms


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 synonyms:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif