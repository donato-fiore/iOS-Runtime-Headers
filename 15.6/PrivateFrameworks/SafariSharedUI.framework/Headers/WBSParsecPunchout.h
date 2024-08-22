// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECPUNCHOUT_H
#define WBSPARSECPUNCHOUT_H

@class WBSParsecModel, NSString, NSURL;



@interface WBSParsecPunchout : WBSParsecModel

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSURL *installURL; // ivar: _installURL
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *punchoutLabel; // ivar: _punchoutLabel
@property (readonly, nonatomic) NSURL *punchoutURL; // ivar: _punchoutURL


+(id)schema;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif