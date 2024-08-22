// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXPROMISE_H
#define _EXPROMISE_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _EXPromise : NSObject <NSSecureCoding>



@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) id *promiseBlock; // ivar: _promiseBlock


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPromiseBlock:(id)arg0 ;
-(id)resolveObjectOfClass:(Class)arg0 error:(*id)arg1 ;
-(id)resolveObjectOfClasses:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveObjectOfClass:(Class)arg0 completion:(id)arg1 ;
-(void)resolveObjectOfClasses:(id)arg0 completion:(id)arg1 ;


@end


#endif