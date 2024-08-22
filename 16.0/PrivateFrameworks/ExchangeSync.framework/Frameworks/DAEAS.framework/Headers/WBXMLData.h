// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBXMLDATA_H
#define WBXMLDATA_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface WBXMLData : NSObject {
    NSMutableData *_data;
    unsigned char _currentCodePage;
    BOOL _haveAppliedCurrentCodePage;
    NSMutableData *_stateStack;
}


@property (readonly, nonatomic) NSMutableData *data;


-(id)dataExpectCompleteData:(BOOL)arg0 ;
-(id)init;
-(unsigned char)currentCodePage;
-(void)_applyCurrentCodePage;
-(void)appendByteArrayData:(id)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)appendEmptyTag:(unsigned char)arg0 ;
-(void)appendInt:(int)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)appendTag:(unsigned char)arg0 withByteArrayDataContent:(id)arg1 ;
-(void)appendTag:(unsigned char)arg0 withIntContent:(int)arg1 ;
-(void)appendTag:(unsigned char)arg0 withStringContent:(id)arg1 ;
-(void)appendTag:(unsigned char)arg0 withStringContentAsData:(id)arg1 ;
-(void)closeProspectiveTag:(unsigned char)arg0 ;
-(void)closeTag:(unsigned char)arg0 ;
-(void)openProspectiveTag:(unsigned char)arg0 ;
-(void)openTag:(unsigned char)arg0 ;
-(void)renderProspectiveTags;
-(void)switchToCodePage:(unsigned char)arg0 ;


@end


#endif