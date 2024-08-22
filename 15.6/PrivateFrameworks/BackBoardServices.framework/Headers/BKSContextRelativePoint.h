// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSCONTEXTRELATIVEPOINT_H
#define BKSCONTEXTRELATIVEPOINT_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSContextRelativePoint : NSObject <BSXPCSecureCoding>



@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint point; // ivar: _point
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithPoint:(struct CGPoint )arg0 contextID:(unsigned int)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif