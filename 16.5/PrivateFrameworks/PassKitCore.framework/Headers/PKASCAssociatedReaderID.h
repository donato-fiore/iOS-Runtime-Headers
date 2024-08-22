// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKASCASSOCIATEDREADERID_H
#define PKASCASSOCIATEDREADERID_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKASCAssociatedReaderIDReaderCA.h"

@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (retain, nonatomic) PKASCAssociatedReaderIDReaderCA *readerCA; // ivar: _readerCA
@property (retain, nonatomic) NSData *readerID; // ivar: _readerID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToASCAssociatedReaderID:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif