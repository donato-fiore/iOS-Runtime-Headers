// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPSERVICEUPDATERDASMATCHINGRULE_H
#define UARPSERVICEUPDATERDASMATCHINGRULE_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPServiceUpdaterDASMatchingRule : NSObject <NSSecureCoding>



@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSDictionary *matchingDictionary; // ivar: _matchingDictionary


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 matchingDictionary:(id)arg1 ;
-(void)dealloc;
-(void)dumpWithTabDepth:(NSUInteger)arg0 dumpString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif