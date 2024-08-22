// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIOHYPOGEANVIEWHANDLE_H
#define _UIOHYPOGEANVIEWHANDLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIOHypogeanViewHandle : NSObject <NSSecureCoding>



@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) unsigned int contextId; // ivar: _contextId
@property (nonatomic) NSUInteger renderId; // ivar: _renderId
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif