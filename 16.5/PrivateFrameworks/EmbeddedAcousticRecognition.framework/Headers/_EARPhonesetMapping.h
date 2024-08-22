// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARPHONESETMAPPING_H
#define _EARPHONESETMAPPING_H


#import <Foundation/Foundation.h>


@interface _EARPhonesetMapping : NSObject {
    shared_ptr<quasar::PhonesetMapping> _phoneset;
}




-(id)initWithLanguage:(id)arg0 ;
-(id)ipaPhoneSequenceForAsrProns:(id)arg0 ;
-(id)nvAsrPhoneSequenceForXsampaProns:(id)arg0 ;


@end


#endif