// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECRAWMESSAGEHEADER_H
#define ECRAWMESSAGEHEADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ECRawMessageHeader : NSObject

@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *transmittedName; // ivar: _transmittedName


-(id)description;
-(id)initWithHeaderFieldName:(id)arg0 body:(id)arg1 ;


@end


#endif