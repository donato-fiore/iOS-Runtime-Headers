// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCMOUSEEVENTDATA_H
#define GCMOUSEEVENTDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCMouseEventData : NSObject <NSSecureCoding>



@property NSUInteger buttonMask; // ivar: _buttonMask
@property float deltaX; // ivar: _deltaX
@property float deltaY; // ivar: _deltaY
@property NSUInteger senderID; // ivar: _senderID
@property unsigned short source; // ivar: _source
@property unsigned int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif