// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIWORDEMBEDDINGMATCH_H
#define PSIWORDEMBEDDINGMATCH_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding>



@property (readonly) NSString *extendedWord; // ivar: _extendedWord
@property (readonly) CGFloat score; // ivar: _score
@property (readonly) NSString *word; // ivar: _word


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWord:(id)arg0 extendedWord:(id)arg1 score:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif