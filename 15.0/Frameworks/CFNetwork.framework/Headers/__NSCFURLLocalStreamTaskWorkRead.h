// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFURLLOCALSTREAMTASKWORKREAD_H
#define __NSCFURLLOCALSTREAMTASKWORKREAD_H

@class NSCFURLLocalStreamTaskWork, NSData;



@interface __NSCFURLLocalStreamTaskWorkRead : NSCFURLLocalStreamTaskWork {
    unsigned int _minBytes;
    unsigned int _maxBytes;
    id *_completion;
    NSData *_readData;
    BOOL _eof;
}




-(void)dealloc;


@end


#endif