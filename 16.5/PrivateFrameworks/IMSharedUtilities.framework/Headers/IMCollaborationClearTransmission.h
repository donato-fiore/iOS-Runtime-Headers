// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCOLLABORATIONCLEARTRANSMISSION_H
#define IMCOLLABORATIONCLEARTRANSMISSION_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMCollaborationClearTransmission : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *collaborationId; // ivar: _collaborationId
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *guidString; // ivar: _guidString


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationId:(id)arg0 date:(id)arg1 guidString:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif