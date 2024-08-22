// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21DOCUMENTUNDERSTANDING20DUREQUESTCONTENTTYPE_H
#define _TTC21DOCUMENTUNDERSTANDING20DUREQUESTCONTENTTYPE_H


#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding20DURequestContentType : NSObject

@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic) NSInteger rawValue; // ivar: rawValue


+(id)address;
+(id)date;
+(id)languageTag;
+(id)link;
+(id)phoneNumber;
+(id)productCategory;
+(id)wikiDataTopic;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithAbilitiesToUnion:(id)arg0 ;
-(id)initWithRawValue:(NSInteger)arg0 ;
-(void)formIntersection:(id)arg0 ;
-(void)formSymmetricDifference:(id)arg0 ;
-(void)formUnion:(id)arg0 ;


@end


#endif