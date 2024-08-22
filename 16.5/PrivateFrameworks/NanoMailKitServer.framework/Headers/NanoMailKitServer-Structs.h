typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL fullSyncVersion;
} ?;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct _xmlSAXHandler {
    unk internalSubset;
    unk isStandalone;
    unk hasInternalSubset;
    unk hasExternalSubset;
    unk resolveEntity;
    unk getEntity;
    unk entityDecl;
    unk notationDecl;
    unk attributeDecl;
    unk elementDecl;
    unk unparsedEntityDecl;
    unk setDocumentLocator;
    unk startDocument;
    unk endDocument;
    unk startElement;
    unk endElement;
    unk reference;
    unk characters;
    unk ignorableWhitespace;
    unk processingInstruction;
    unk comment;
    unk warning;
    unk error;
    unk fatalError;
    unk getParameterEntity;
    unk cdataBlock;
    unk externalSubset;
    unsigned int initialized;
    void _private;
    unk startElementNs;
    unk endElementNs;
    unk serror;
} _xmlSAXHandler;

typedef struct _xmlParserCtxt {
} // Error Processing Struct Fields

typedef struct _xmlError {
    int field0;
    int field1;
    char * field2;
    int field3;
    char * field4;
    int field5;
    char * field6;
    char * field7;
    char * field8;
    int field9;
    int field10;
    void field11;
    void field12;
} _xmlError;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

