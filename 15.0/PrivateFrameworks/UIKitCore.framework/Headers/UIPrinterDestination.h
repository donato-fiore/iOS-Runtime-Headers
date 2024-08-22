// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTERDESTINATION_H
#define UIPRINTERDESTINATION_H

@class NSURL, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIPrinterDestination : NSObject <NSSecureCoding>



@property (copy) NSURL *URL; // ivar: _URL
@property (copy) NSString *displayName; // ivar: _displayName
@property (copy) NSData *txtRecord; // ivar: _txtRecord


+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif