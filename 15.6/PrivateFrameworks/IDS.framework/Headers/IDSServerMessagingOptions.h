// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSERVERMESSAGINGOPTIONS_H
#define IDSSERVERMESSAGINGOPTIONS_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSServerMessagingOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif