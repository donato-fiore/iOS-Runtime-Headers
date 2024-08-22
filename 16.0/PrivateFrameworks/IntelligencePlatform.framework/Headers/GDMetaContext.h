// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDMETACONTEXT_H
#define GDMETACONTEXT_H

@class NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDMetaContext : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSArray *relatedEntities; // ivar: _relatedEntities


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 relatedEntities:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif