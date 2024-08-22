// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILEXICON_H
#define TILEXICON_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TILexicon : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *entries; // ivar: _entries


+(BOOL)supportsSecureCoding;
+(id)lexiconWithEntries:(id)arg0 ;
+(void)requestLexiconFromBundlePath:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif