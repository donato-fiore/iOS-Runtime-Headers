// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21SIRIINFORMATIONSEARCH17CLIENTAUDIORESULT_H
#define _TTC21SIRIINFORMATIONSEARCH17CLIENTAUDIORESULT_H

@class TtC21SiriInformationSearch12PommesResult, NSString;



@interface _TtC21SiriInformationSearch17ClientAudioResult : TtC21SiriInformationSearch12PommesResult {
    ? vocabularyResult;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif