// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKACTIONCUSTOM_H
#define OKACTIONCUSTOM_H

@class NSDictionary, NSString;
@protocol OKActionCustomExports, NSSecureCoding;


#import "OKAction.h"

@interface OKActionCustom : OKAction <OKActionCustomExports, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)customActionWithName:(id)arg0 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif