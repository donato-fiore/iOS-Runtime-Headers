// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMBOOKMARKNODE_H
#define BMBOOKMARKNODE_H

@class NSString, NSArray;
@protocol BMBookmark, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMBookmarkNode : NSObject <BMBookmark, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *upstreams; // ivar: _upstreams
@property (retain, nonatomic) NSObject<BMBookmark> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)descriptionAtLevel:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 upstreams:(id)arg1 name:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif