// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEDATARICHTEXTPAYLOAD_H
#define TSTTABLEDATARICHTEXTPAYLOAD_H



#import "TSTTableDataObject.h"
#import "TSTRichTextPayload.h"

@interface TSTTableDataRichTextPayload : TSTTableDataObject {
    TSTRichTextPayload *mPayload;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initObjectWithRichTextPayload:(id)arg0 ;
-(void)dealloc;


@end


#endif