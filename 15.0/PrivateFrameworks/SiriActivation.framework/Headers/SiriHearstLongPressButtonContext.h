// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIHEARSTLONGPRESSBUTTONCONTEXT_H
#define SIRIHEARSTLONGPRESSBUTTONCONTEXT_H



#import "SiriLongPressButtonContext.h"

@interface SiriHearstLongPressButtonContext : SiriLongPressButtonContext {
    BOOL _isTemporaryDevice;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isTemporaryDevice;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpeechRequestOptions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif