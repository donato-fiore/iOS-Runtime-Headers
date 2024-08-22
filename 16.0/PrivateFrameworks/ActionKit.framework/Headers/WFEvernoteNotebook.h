// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEVERNOTENOTEBOOK_H
#define WFEVERNOTENOTEBOOK_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFEvernoteNotebook : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *guid; // ivar: _guid
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGUID:(id)arg0 name:(id)arg1 ;
-(id)initWithNotebook:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif