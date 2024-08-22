// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSRECORDPROMISE_H
#define LSRECORDPROMISE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LSDatabase.h"

@interface LSRecordPromise : NSObject <NSSecureCoding>

 {
    _LSDatabase *_db;
    NSData *_pi;
}




+(BOOL)supportsSecureCoding;
+(id)new;
-(id)_initWithRecord:(id)arg0 ;
-(id)fulfillReturningError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif