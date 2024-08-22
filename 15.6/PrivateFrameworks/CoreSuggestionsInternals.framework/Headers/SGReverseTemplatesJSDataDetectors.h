// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGREVERSETEMPLATESJSDATADETECTORS_H
#define SGREVERSETEMPLATESJSDATADETECTORS_H

@class NSMutableDictionary, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface SGReverseTemplatesJSDataDetectors : NSObject {
    NSMutableDictionary *_scanners;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}




-(?)_result:(?)arg0 containsTypesfoundTypes;
-(?)_resultcontainsTypes;
-(id)init;
-(id)runDataDetectors:(id)arg0 locale:(id)arg1 epoch:(CGFloat)arg2 metadataForTypes:(id)arg3 ;
-(void)dealloc;


@end


#endif