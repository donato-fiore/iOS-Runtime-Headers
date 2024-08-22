// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFVOICECOMMANDGRAMMARPARSEPACKAGE_H
#define AFVOICECOMMANDGRAMMARPARSEPACKAGE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFVoiceCommandGrammarParsePackage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *nBestParses; // ivar: _nBestParses
@property (readonly, copy, nonatomic) NSArray *preITNNBestParses; // ivar: _preITNNBestParses


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNBestParses:(id)arg0 preITNNBestParses:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif