// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYSERVICEURLREPRESENTATION_H
#define WBSHISTORYSERVICEURLREPRESENTATION_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSData *urlHash; // ivar: _urlHash
@property (readonly, copy, nonatomic) NSData *urlSalt; // ivar: _urlSalt
@property (readonly, copy, nonatomic) NSString *urlString; // ivar: _urlString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLHash:(id)arg0 salt:(id)arg1 ;
-(id)initWithURLString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif