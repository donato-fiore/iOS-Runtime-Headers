// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLURRGROUPIDENTIFIER_H
#define SIRINLURRGROUPIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLURRGroupIdentifier : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *groupId; // ivar: _groupId
@property int seq; // ivar: _seq


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupId:(id)arg0 seq:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif