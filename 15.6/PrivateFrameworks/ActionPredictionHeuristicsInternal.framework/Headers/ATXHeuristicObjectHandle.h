// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEURISTICOBJECTHANDLE_H
#define ATXHEURISTICOBJECTHANDLE_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHeuristicObjectHandle : NSObject <NSSecureCoding>

 {
    NSNumber *_deviceHandle;
    NSNumber *_objHandle;
}


@property (readonly, nonatomic) id *obj; // ivar: _obj


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 wrapping:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif