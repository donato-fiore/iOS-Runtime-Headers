// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOBSERVABLEOBJECTRESULT_H
#define WFOBSERVABLEOBJECTRESULT_H



#import "WFObservableResult.h"
#import "WFDatabaseObjectDescriptor.h"

@interface WFObservableObjectResult : WFObservableResult

@property (readonly, nonatomic) WFDatabaseObjectDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) WFDatabaseObjectDescriptor *value; // ivar: _value


+(id)getResultWithDescriptor:(id)arg0 valueType:(Class)arg1 glyphSize:(struct CGSize )arg2 error:(*id)arg3 ;
+(void)getResultWithDescriptor:(id)arg0 valueType:(Class)arg1 glyphSize:(struct CGSize )arg2 completionHandler:(id)arg3 ;
-(id)description;
-(id)initWithValueType:(Class)arg0 glyphSize:(struct CGSize )arg1 initialValue:(id)arg2 descriptor:(id)arg3 ;
-(void)handleChangeNotification:(id)arg0 ;


@end


#endif