// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSYSTEMPROTOCOLPARAMETER_H
#define LNSYSTEMPROTOCOLPARAMETER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNSystemProtocolParameter : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger vocabularyModel; // ivar: _vocabularyModel


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVocabularyModel:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif