// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAONGOINGACCESSRECORD_H
#define PAONGOINGACCESSRECORD_H

@class NSString;
@protocol PAAccessRecord;

#import <Foundation/Foundation.h>

#import "PAAccess.h"

@interface PAOngoingAccessRecord : NSObject <PAAccessRecord>



@property (readonly, nonatomic) PAAccess *access; // ivar: _access
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAccess:(id)arg0 startTime:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif