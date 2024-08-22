// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSCRDTMODELSYNCVERSIONINFO_H
#define BDSCRDTMODELSYNCVERSIONINFO_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BDSCRDTModelSyncVersionInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSData *data; // ivar: _data


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif