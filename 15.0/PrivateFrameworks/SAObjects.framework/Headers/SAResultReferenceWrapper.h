// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SARESULTREFERENCEWRAPPER_H
#define SARESULTREFERENCEWRAPPER_H



#import "SAAceView.h"
#import "SAResultObjectReference.h"

@interface SAResultReferenceWrapper : SAAceView

@property (retain, nonatomic) SAResultObjectReference *resultReference;


+(id)resultReferenceWrapperWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif