// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING20DUREQUESTCONTENTTYPE_H
#define _TTC21DOCUMENTUNDERSTANDING20DUREQUESTCONTENTTYPE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding20DURequestContentType : NSObject <NSCopying>



@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic) NSInteger rawValue; // ivar: rawValue


+(id)address;
+(id)category;
+(id)date;
+(id)languageTag;
+(id)link;
+(id)navigationTitle;
+(id)phoneNumber;
+(id)productCategory;
+(id)userInterfaceUnderstanding;
+(id)wikiDataTopic;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithAbilitiesToUnion:(id)arg0 ;
-(id)initWithRawValue:(NSInteger)arg0 ;
-(void)formIntersection:(id)arg0 ;
-(void)formSymmetricDifference:(id)arg0 ;
-(void)formUnion:(id)arg0 ;


@end


#endif