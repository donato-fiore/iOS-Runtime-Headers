// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLRUNTIMEPROPERTYPREVIEW_H
#define RWIPROTOCOLRUNTIMEPROPERTYPREVIEW_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeObjectPreview.h"

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (nonatomic) BOOL internal;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger subtype;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *valuePreview;


-(id)initWithName:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif