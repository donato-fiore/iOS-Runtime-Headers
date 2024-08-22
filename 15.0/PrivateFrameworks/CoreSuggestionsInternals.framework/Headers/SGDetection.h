// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDETECTION_H
#define SGDETECTION_H

@class NSString, SGExtractionInfo;

#import <Foundation/Foundation.h>


@interface SGDetection : NSObject

@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) _NSRange contextRangeOfInterest; // ivar: _contextRangeOfInterest
@property (readonly, nonatomic) NSString *extraction; // ivar: _extraction
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo; // ivar: _extractionInfo
@property (readonly, nonatomic) BOOL hasPhoneLabel; // ivar: _hasPhoneLabel
@property (readonly, nonatomic) BOOL isUnlikelyPhone; // ivar: _isUnlikelyPhone
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) _NSRange match; // ivar: _match
@property (readonly, nonatomic) unsigned int type; // ivar: _type


+(id)detectionWithType:(unsigned int)arg0 text:(id)arg1 matchRange:(struct _NSRange )arg2 matchString:(id)arg3 label:(id)arg4 hasPhoneLabel:(BOOL)arg5 extractionInfo:(id)arg6 isUnlikelyPhone:(BOOL)arg7 ;
-(id)description;
-(id)initWithType:(unsigned int)arg0 extraction:(id)arg1 context:(id)arg2 contextRangeOfInterest:(struct _NSRange )arg3 label:(id)arg4 hasPhoneLabel:(BOOL)arg5 match:(struct _NSRange )arg6 extractionInfo:(id)arg7 isUnlikelyPhone:(BOOL)arg8 ;


@end


#endif