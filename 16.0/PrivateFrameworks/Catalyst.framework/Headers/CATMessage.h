// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATMESSAGE_H
#define CATMESSAGE_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CATMessage : NSObject <NSSecureCoding>



@property (retain, nonatomic) id *cat_assertion;
@property (retain, nonatomic) NSUUID *messageUUID; // ivar: _messageUUID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif