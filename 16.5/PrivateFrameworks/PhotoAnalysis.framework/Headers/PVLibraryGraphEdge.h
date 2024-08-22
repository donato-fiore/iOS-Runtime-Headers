// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVLIBRARYGRAPHEDGE_H
#define PVLIBRARYGRAPHEDGE_H

@class MAEdge, NSString, NSDictionary;



@interface PVLibraryGraphEdge : MAEdge {
    unsigned short _domain;
    float _weight;
    NSString *_label;
    NSDictionary *_properties;
}




-(float)weight;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)properties;
-(unsigned short)domain;


@end


#endif